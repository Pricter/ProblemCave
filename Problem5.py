import numpy
import time
t0 = time.time()

ints = numpy.array(range(1,21))
primes = [2,3,5,7,11,13,17,19]
facts = []
for p in primes:
    counter = 0
    nums = ints
    while any(nums % p == 0):
        nums = nums / float(p)
        counter += 1
    facts.append(counter)

facts = numpy.array(facts)
mults = primes**facts
ans = 1
for m in mults:
    ans = m * ans

t1 =time.time()
perf = t1 - t0
print(ans)