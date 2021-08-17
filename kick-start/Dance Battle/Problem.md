# Problem: Dance Battle

Your team is about to prove itself in a dance battle! Initially, your team has **E** points of energy, and 0 points of honor. There are **N** rival teams who you must face; the i-th of these teams is the i-th in a lineup, and has a dancing skill of **Si**.

In each round of battle, you will face the next rival team in the lineup, and you can take one of the following actions:

1. *Dance*: Your team loses energy equal to the dancing skill of the rival team, and that team does not return to the lineup. You gain one point of honor. You cannot take this action if it would make your energy drop to 0 or less.
2. *Delay*: You make excuses ("our shoes aren't tied!") and the rival team returns to the back of the lineup. Your energy and honor do not change.
3. *Truce*: You declare a truce with the rival team, and that team does not return to the lineup. Your energy and honor do not change.
4. *Recruit*: You recruit the rival team onto your team, and that team does not return to the lineup. Your team gains energy equal to the dancing skill of the rival team, but you lose one point of honor. You cannot take this action if it would make your honor drop below 0.

The battle is over when there are no more rival teams in the lineup. If you make optimal decisions, what is the maximum amount of honor you can have when the battle is over?

## Input
The first line of the input gives the number of test cases, **T**. **T** test cases follow; each consists of two lines. The first line consists of two integers **E** and **N**: your team's energy, and the number of rival teams. The second line consists of **N** integers **Si**; the i-th of these represents the dancing skill of the rival team that is i-th in line at the start of the battle.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum amount of honor you can have when the battle is over.

## Limits
Time limit: 20 seconds.
Memory limit: 1 GB.
1≤**T**≤100.
1≤**E**≤106.
1≤**Si**≤106, for all i.

### Test Set 1
1≤**N**≤5.

### Test Set 2
1≤**N**≤1000.

### Sample Input
```
2
100 1
100
10 3
20 3 15
```

### Sample Output
```
Case #1: 0
Case #2: 1
```

In Sample Case #1, there is only one rival team. You cannot dance against them because it would make your energy fall to 0, and you cannot recruit them because it would make your honor fall below 0. Delaying does not help, so the only option is to declare a truce. You finish with 0 honor.

In Sample Case #2, one optimal strategy is:

1. Delay against the first rival team. They go to the back of the lineup.
2. Dance against the second rival team. Your energy drops to 7, and your honor increases to 1.
3. Recruit the third rival team. Your energy increases to 22, and your honor decreases to 0.
4. Dance against the first rival team (which is now at the head of the lineup again). Your energy drops to 2, and your honor increases to 1.

You finish with 1 point of honor.
