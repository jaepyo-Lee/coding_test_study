def solution(s):
    answer = 0

    for i in range(len(s)):
        for j in range(len(s), i, -1):
            if s[i:j] == s[i:j][::-1]:
                if answer < len(s[i:j]):
                    answer = len(s[i:j])

    return answer