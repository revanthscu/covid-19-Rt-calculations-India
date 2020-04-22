# covid-19-Rt-calculations-India
Rt calculations for Indian states

When the lockdowns be lifted?
Lockdowns have been successful in reducing but have caused enormous damage to economies.
To answer this question, we need a metric to take decision as to when to lift them. 
Rt - effective reproduction number or average number of people to whom an infected person passes on the virus in a population.
The value of helps us in two ways:
(1) It helps us understand how effective our measures have been controlling an outbreak 
(2) it gives us information about whether we should increase or reduce restrictions based on our competing goals of economic prosperity and human safety
It is being already captured by Hong Kong, Taiwan and US.
Lower the Rt the better our lockdowns have worked in our favour. We currently need to adopt suppress and lift strategy by gauging the Rt score for different Indian states (can be scaled to districts).

This solution is inspired by the [article](https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0002185) created by Bettencourt & Riberio 2008 to estimate real time Rt using Bayesian approach. 
Every day, we learn how many more people have COVID-19. This new case count gives us a clue about the current value of Rt. We also, figure that the value of Rt today is related to the value of (yesterday's value) and every previous value of for that matter.
My work is mostly similar to the work done by Kevin Systrom and Mike Krieger for the US country. [Link](https://github.com/k-sys/covid-19/blob/master/Realtime%20R0.ipynb) 
