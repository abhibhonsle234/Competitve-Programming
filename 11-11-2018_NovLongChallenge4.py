def secondBest(ar, l, r):
	l1,r1,l2,r2 = -1,-1,-1,-1
	count = 0
	maxi = 0
	for j in range(l+1, r):
		if ar[j] == 1:
			if count == 0:
				l2 = j
			count += 1
			if j == r-1:
				if maxi == 0:
					maxi = count
					r1 = j
					l1 = l2
					count = 0
				elif maxi < count:
					maxi = count
					r1 = j
					l1 = l2
					count = 0
				else:
					count = 0
		else:
			if count >= (r-l)/2:
				maxi = count
				l1 = l2
				r1 = j-1
				count = 0
				break
			if maxi == 0:
				maxi = count
				l1 = l2
				r1 = j-1
				count = 0
			elif maxi < count:
				maxi = count
				l1 = l2
				r1 = j-1
				count = 0
			else:
				count = 0
	if l1 < 0:
		r1 = -1
	elif r1 < 0:
		l1 = -1
	#print("in method:", l1, r1)
	return  l1, r1

n, q, k = [int(x) for x in input().split()]

ar = [int(x) for x in input().split()]

#codeChef
#ar = [1, 1, 0, 1, 1]
#i = [0, 1, 2, 3, 4]

#1
#ar = [1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#2
#ar = [0, 0, 0, 1, 1, 1, 1, 1, 0, 0]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
#3
#ar = [0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]
#4
#ar = [0, 1, 1, 0, 1, 1, 1, 1, 0]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8]
#5
#ar = [1, 1, 1, 1, 0, 0, 0]
#ii = [0, 1, 2, 3, 4, 5, 6]
#6
#ar = [0, 0, 0, 1, 1, 1, 1]
#ii = [0, 1, 2, 3, 4, 5, 6]
#7
#ar = [1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
#8
#ar = [1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
#9
#ar = [1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17]
#10
#ar = [1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21]
#11
#ar = [1, 1, 1, 1, 1]
#ii = [0, 1, 2, 3, 4]
#12
#ar = [0, 0, 0, 0, 0]
#ii = [0, 1, 2, 3, 4]
#13
#ar = [1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17]
#14
#ar = [1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18]
#15
#ar = [0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1]
#ii = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]

st = input()

#print(ar)
#print(ii)

default = -1
l = -1
r = -1
for i in range( 0, n ):
	if ar[i] == 0:
		l = i
		break
if l != -1:
	for i in range(n-1, -1, -1):
		if ar[i] == 0:
			r = i
			break
	#print("l:", l, "r:", r)
else:
	default = n

l1 = -1
r1 = -1
count = -1
maxi = -1
r2 = -1
l2 = -1
if l != r:
	count = 0
	l1 = l+1
	r1 = r-1
	l2 = -1
	r2 = -1
	maxi = 0
	for j in range(l+1, r):
		if ar[j] == 1:
			if count == 0:
				l2 = j
			count += 1
			if j == r-1:
				if maxi == 0:
					maxi = count
					r1 = j
					l1 = l2
					count = 0
				elif maxi < count:
					maxi = count
					r1 = j
					l1 = l2
					count = 0
				else:
					count = 0
		else:
			if count >= (r-l)/2:
				maxi = count
				l1 = l2
				r1 = j-1
				count = 0
				break
			if maxi == 0:
				maxi = count
				l1 = l2
				r1 = j-1
				count = 0
			elif maxi < count:
				maxi = count
				l1 = l2
				r1 = j-1
				count = 0
			else:
				count = 0
	numZeroes = 0
	if maxi == 0:
		numZeroes = r-l+1
		r1 = -1
		l1 = -1
else:
	numZeroes = 1	

if numZeroes == n:
	default = 0

#second best:
if l1 != -1 and r1 != -1:
	l2, r2 = secondBest(ar, l, l1)
	l3, r3 = secondBest(ar, r1, r)
	if r2-l2+1 < r3-l3+1:
		l2, r2 = l3, r3
	#print("l1:", l1, "r1:", r1, "l2:", l2, "r2:", r2, "numZeroes:", numZeroes)
maxList = {}
#print("l1:", l1, "r1:", r1, "numZeroes:", numZeroes)

midMax = r1-l1+1
if r1 ==-1 and l1 == -1:
	midMax = 0
lMax = l
rMax = n-1-r

if lMax +rMax > r2-l2+1:
	l2, r2 = -lMax, rMax-1
	#print("Big Guy:", "l1:", l1, "r1:", r1, "l2:", l2, "r2:", r2, "numZeroes:", numZeroes)


maxi = max(midMax, lMax, rMax)

mid, left, right = False, False, False

if maxi == midMax:
	mid = True
elif maxi == lMax:
	left = True
else:
	right = True

#print("biggest:", mid, left, right)

maxCount = 0
maxList = {}
rPointer = n-1
for i in range(0, q):
	if st[i] == "!":
		if rPointer != 0:
			rPointer -= 1
		else:
			rPointer = n-1
	else:
		if default != -1:
			print( min(k, default) )
			continue
		if i>0 and st[i-1] == "?":
			print(maxi)
			continue
		try:
			#print(maxCount % (n))
			#print("maxInd:", maxInd)
			#print("maxList:", maxList)
			#print("han chala")
			print(maxList[rPointer])
			#print("han chala")
			continue
		except KeyError:
			pass
		#if mid and
		if mid and lMax == 0 and rMax == 0:
			if rPointer < r1 and rPointer >= l1:
				maxi = min( k, max(r1 - rPointer, rPointer - l1 + 1) )
				maxList[rPointer] = maxi
				print(maxi)
				continue
			else:
				maxi = min (k, midMax)
				maxList[rPointer] = maxi
				print(maxi)
				continue
		elif mid and midMax < (lMax + rMax):
			if rPointer > r:
				maxi = min( k, max(midMax, lMax + (n-1-rPointer) ) )
				maxList[rPointer] = maxi
				print(maxi)
				continue
			elif rPointer <= r and rPointer >= l:
				maxi = min(k, lMax+rMax)
				maxList[rPointer] = maxi
				print(maxi)
				continue
			else:
				maxi = min(k, max(midMax, rMax + (lMax - (l-rPointer-1) ) ) )
				maxList[rPointer] = maxi
				print(maxi)
				continue
		elif mid:
			if rPointer >= r1 or rPointer < l1:
				maxi = min(k, midMax)
				maxList[rPointer] = maxi
				print(maxi)
				continue
			elif rPointer >= l1:
				maxi = min(k, max(r1-rPointer, rPointer-l1+1, r2-l2+1) )
				maxList[rPointer] = maxi
				print(maxi)
				continue
		elif (left or right) and (midMax == 0):
			#print("hao")
			if rPointer > r:
				maxi = min(k, max(lMax+n-1-rPointer, rPointer-r) )
				maxList[rPointer] = maxi
				print(maxi)
			elif rPointer < l:
				maxi = min(k, max(rMax+rPointer+1, l-rPointer-1) )
				maxList[rPointer] = maxi
				print(maxi)
			else:
				maxi = min(k, lMax+rMax)
				maxList[rPointer] = maxi
				print(maxi)
		elif left and l1 == -1:
			if rPointer >= l-1:
				maxi = min(k, lMax)
				maxList[rPointer] = maxi
				print(maxi) 
				continue
			else:
				maxi = min(k, max(rPointer+1, l - rPointer - 1 ) )
				maxList[rPointer] = maxi
				print(maxi) 
				continue
		elif right and r1 == -1:
			if rPointer <= r:
				maxi = min(k, rMax)
				maxList[rPointer] = maxi
				print(maxi) 
				continue
			else:
				maxi = min(k, max(rPointer-r, n - rPointer) )
				maxList[rPointer] = maxi
				print(maxi) 
				continue
		elif left or right:
			if rPointer > r:
				maxi = min(k, max(lMax+(n-1 - rPointer), rPointer - r, midMax) )
				maxList[rPointer] = maxi
				print(maxi) 
				continue
			elif rPointer <= r and rPointer >= l:
				maxi = min(k, lMax + rMax)
				maxList[rPointer] = maxi
				print(maxi) 
				continue
			elif rPointer >= 0 and rPointer < l:
				maxi = min(k, max( (lMax + rMax) - (l - rPointer - 1), midMax ) )
				maxList[rPointer] = maxi
				print(maxi) 
				continue 
#print(maxList)