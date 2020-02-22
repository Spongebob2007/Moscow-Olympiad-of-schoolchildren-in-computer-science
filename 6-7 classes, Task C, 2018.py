n = int(input())
arr = list(sorted(list(map(int, input().split())), reverse=True))

ans1 = []
ans2 = []
for i in range(0, n, 2):
    ans1.append(arr[i])
for i in range(1, n, 2):
    ans2.append(arr[i])

ans = ans1 + list(reversed(ans2))
print(" ".join(map(str, ans)))
