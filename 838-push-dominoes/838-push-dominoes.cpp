class Solution {
public:
    string pushDominoes(string dominoes) {
        int lastFallIdx = -1, lastFallDir = -1, len = (int)dominoes.length();
        for(int i = 0, j = 0; i < len; ++i) {
            if('L' == dominoes[i]) {
                j = ('R' == lastFallDir) ? (i + lastFallIdx) / 2 : lastFallIdx;
                std::fill(dominoes.begin() + j + 1, dominoes.begin() + i + 1, 'L');
                if('R' == lastFallDir && 0 == (1 & (i + lastFallIdx))) dominoes[j] = '.';
            }
            if('.' != dominoes[i]) lastFallIdx = i, lastFallDir = dominoes[i];
            if('R' == lastFallDir) dominoes[i] = 'R';
        }
        return dominoes;
    }
};