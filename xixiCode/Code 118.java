public class Solution {
	public List<List<Integer>> generate(int numRows)
	{
		List<List<Integer>> triangle = new ArrayList<List<Integer>>();
		for (int i = 0; i < numRows; i++) {
			List<Integer> rows = new ArrayList<Integer>();
			for (int j = 0; j <= i; j++) {
				if (j == 0 || j == i)
					rows.add(1);
				else
					rows.add(triangle.get(i - 1).get(j) + triangle.get(i - 1).get(j - 1));
			}
			triangle.add(rows);
		}
		return triangle;
	}
}