def printlist(vals):
	for i in vals:
		print(' '+format(i,'02X'),end="")
	print('')

def main():
	t = int(input(''))
	k = 1

	while t > 0:
		print ("Case "+str(k)+':', end ="")
		k = k+1
		vals = [0] * 100
		point = 0
		li = 0
		inst = input('')

		for li in inst:
			if li == '>':
				point = point+1
				if point == 100:
					point = 0
			elif li == '<':
				point = point-1
				if point < 0:
					point = 99	
			elif li == '+':
				vals[point] = vals[point]+1
				if vals[point] == 256:
					vals[point] = 0
			elif li == '-':
				vals[point] = vals[point]-1
				if vals[point] < 0:
					vals[point] = 255
		t = t-1
		printlist(vals)
main()


		