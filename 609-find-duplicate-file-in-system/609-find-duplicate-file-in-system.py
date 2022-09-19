class Solution:
    def findDuplicate(self, paths):
        files, file_grps, res = [], defaultdict(list), []
        for p in paths:
            parts = p.split(' ')
            for i in range(1, len(parts)): files.append(parts[0] + '/' + parts[i])
        for file in files: file_grps[file[file.index('('):]].append(file[:file.index('(')])

        for k, v in file_grps.items(): res.append(v)
        return [grp for grp in res if len(grp) > 1]