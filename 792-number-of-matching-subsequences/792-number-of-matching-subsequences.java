class Solution {
    // int mp[];
    public int numMatchingSubseq(String s, String[] words) {
        Map<String,Boolean> map = new HashMap<>();
        map.put(s,true);
        // mp = new int[26];
        int count = 0;
        // for( char c:s.toCharArray() )
        //     mp[c-'a']++;
        for( String word : words ){
            if( word.length() > s.length() )
                continue;
            else{
                if( isSub(s,word,map) )
                    count++;
            }
        }
        return count;
    }
    private boolean isSub(String s , String word, Map<String,Boolean> map){
        if( map.containsKey(word) )
            return map.get(word);
        int j = 0;
        for( int i = 0 ; i < s.length() ; i++ ){
            // if( mp[word.charAt(j) - 'a' ] == 0 )
            //     return false;
            if( s.charAt(i) == word.charAt(j) ){
                j++;
                if( j == word.length() ){
                    map.put(word,true);
                    return true;
                } 
            }
        }
        map.put(word,false);
        return false;
    }
}