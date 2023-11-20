# 문제 1 (점수 뽑기)
https://www.codetree.ai/problems/picking-score?&utm_source=clipboard&utm_medium=text

# 풀이
500 명의 학생이 4개의 반에 있으므로 모든 경우를 고려하면 500*500*500*500으로 매우 커진다. <br>
둘 둘 나눠서 최대 250,000개의 경우 중 k보다 작은 수에 해당하는 것만 저장해주었다. <br>
그 중 하나의 조합을 dictionary로 만들어주고 나머지 하나의 조합들을 이용하여 최대 25만번의 iteration으로 (k-조합으로 만들어진 숫자)가 dictionary에 있는지, 있으면 몇개 있는지를 파악하여 답을 구했다. <br>
<br> <br> <br>

# 문제 2 (거스름돈 계산하기 2)
https://www.codetree.ai/problems/calculating-change2?&utm_source=clipboard&utm_medium=text

# 풀이
옛날에 데구 시간에 봤었던 dp 문제와 유사하지만 그 문제는 동전 개수의 제한이 없었다. <br>
그래서 많이 헷갈렸는데, 해설을 참고하니 동전의 개수만큼 coin의 list를 만들어서 이를 통하여 dp를 하였다. <br>
특히, 한정된 동전을 어떻게 표현하나 많이 헤맸는데 모든 동전을 인덱싱해서 한 번씩 들어가게 함으로써 해결하였다. <br>
어차피 동전을 고려하는 순서는 상관 없기 때문에, 모든 동전을 고려하여 dp를 하기만 하면 되는 것이다. <br>
