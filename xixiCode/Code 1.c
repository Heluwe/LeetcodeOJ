typedef struct node
{

	int val;
	int id;
	struct node *next;
}
node;

typedef struct {
	node** elm;
}hashtable;

int* twoSum(int numbers[], int n, int target)
{
	int i, id, index[2];
	hashtable h;
	node* p;
	h.elm = (node**)malloc(sizeof(node*) * n);
	for (i = 0; i < n; i++) {
		h.elm[i] = (node*)malloc(sizeof(node));
		h.elm[i]->next = NULL;
	}
	for (i = 0; i < n; i++)
		h.elm[i]->id = -1;
	for (i = 0; i < n; i++) {
		id = numbers[i] % n;
		if (id < 0) id = -id;
		if (h.elm[id]->id == -1) {
			h.elm[id]->val = numbers[i];
			h.elm[id]->id = i;
		}
		else
			while (h.elm[id]->id != -1 && id != -1) {
				p = h.elm[id];
				while (p->next != NULL)
					p = p->next;
				p->next = (node*)malloc(sizeof(node));
				p->next->val = numbers[i];
				p->next->id = i;
				p->next->next = NULL;
				break;
			}
	}   // use division and get mod value,and use link list append to the array to avoid hash conflict
		// the search is like to crate a hash table
	for (i = 0; i < n; i++) {
		id = (target - numbers[i]) % n;
		if (id < 0) id = -id;
		p = h.elm[id];
		while ((p->val != target - numbers[i] || (p->val == target - numbers[i] && p->id == i)) && p->id != -1 && p->next != NULL)
			p = p->next;
		if (p->val == target - numbers[i] && p->id != i) {
			index[0] = (p->id < i ? p->id : i) + 1;
			index[1] = (p->id > i ? p->id : i) + 1;
			break;
		}
	}
	return index;
}