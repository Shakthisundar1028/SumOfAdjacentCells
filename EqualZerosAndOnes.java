import java.util.*;
public class EqualZerosAndOnes{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        HashMap<Integer,Integer> map=new HashMap<>();
        map.put(0,-1);
        int val=0;
        int maxlen=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='1'){
                val+=1;
            } else{
                val-=1;
            }
            if(map.containsKey(val)){
                maxlen=Math.max(maxlen,(i-val));
            }else{
                map.put(val,i);
            }
        }
        System.out.println(maxlen+1);
        sc.close();
    }
}
