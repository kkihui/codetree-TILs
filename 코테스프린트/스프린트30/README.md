# 문제 1 (점수 뽑기)
https://www.codetree.ai/problems/picking-score?&utm_source=clipboard&utm_medium=text

# 풀이
500 명의 학생이 4개의 반에 있으므로 모든 경우를 고려하면 500*500*500*500으로 매우 커진다.
둘 둘 나눠서 최대 250,000개의 경우 중 k보다 작은 수에 해당하는 것만 저장해주었다.
그 중 하나의 조합을 dictionary로 만들어주고 나머지 하나의 조합들을 이용하여 최대 25만번의 iteration으로 k-num이 dictionary에 있는지, 있으면 몇개 있는지를 파악하여 답을 구했다.
<br> <br> <br>

# 문제 2 (거스름돈 계산하기 2)
https://www.codetree.ai/problems/calculating-change2?&utm_source=clipboard&utm_medium=text

# 풀이
