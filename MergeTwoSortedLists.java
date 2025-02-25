import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class MergeTwoSortedLists {
    public static void main(String[] args) {
        List<Integer> list1 = Arrays.asList(1,2,4); 
        List<Integer> list2 = Arrays.asList(1,3,4);

        List<Integer> ans = mergeTwoLists(list1, list2);

        for (Integer integer : ans) {
            System.out.println(integer);
        }
    }

    public static List<Integer> mergeTwoLists(List<Integer> list1, List<Integer> list2) {
        List<Integer> answList = new ArrayList<>();
        try {
            if (list1.size() == 0) {
                answList = list2;
            } else if (list2.size() == 0) {
                answList = list1;
            } else {
                int i = 0;
                int j = 0;
                while (i < list1.size() && j < list2.size()) {
                    if (list1.get(i) < list2.get(j)) {
                        answList.add(list1.get(i));
                        i++;
                    } else if (list1.get(i) > list2.get(j)) {
                        answList.add(list2.get(j));
                        j++;
                    } else {
                        answList.add(list1.get(i));
                        answList.add(list2.get(j));
                        i++;
                        j++;
                    }
                }
    
                // Add remaining elements from list1, if any
                while (i < list1.size()) {
                    answList.add(list1.get(i));
                    i++;
                }
    
                // Add remaining elements from list2, if any
                while (j < list2.size()) {
                    answList.add(list2.get(j));
                    j++;
                }
            }
        } catch (Exception e) {
            System.err.println(e.getMessage());
        }
    
        return answList;
    }
}
