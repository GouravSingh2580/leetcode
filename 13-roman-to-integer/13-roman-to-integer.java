class Solution {
    public int romanToInt(String s) {
        int out = 0; 
        String sss = s
                .replaceAll("IV", "+4")
                .replaceAll("IX", "+9")
                .replaceAll("XL", "+40")
                .replaceAll("XC", "+90")
                .replaceAll("CD", "+400")
                .replaceAll("CM", "+900")
                .replaceAll("I", "+1")
                .replaceAll("V", "+5")
                .replaceAll("X", "+10")
                .replaceAll("L", "+50")
                .replaceAll("C", "+100")
                .replaceAll("D", "+500")
                .replaceAll("M", "+1000");
        ; 
        String strs[] = sss.split("\\+");
        for (String str : strs) {
            if(str.isEmpty()) continue; 
            out += Integer.valueOf(str);
        } 
        return out;
    }
}