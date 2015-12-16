import numpy as np
import scipy.io

class Statistics:

	@staticmethod
	def variance(x):
		return np.std(x)


	@staticmethod
	def accuracy(x, y):
		return np.mean(x == y) * 100.0


	@staticmethod
	def mean_relative_error(x, y):
		return sum([(i-j)/j for i,j in zip(x, y)])/len(y)

	
	@staticmethod
	def f_score(x, y):

		tp = np.sum((x == 1) & (y == 1))
		tn = np.sum((x == 0) & (y == 0))
		fp = np.sum((x == 1) & (y == 0))
		fn = np.sum((x == 0) & (y == 1))

		precision = tp/(tp + fp)
		recall = tp/(tp + fn)
		acc = (tp + tn)/(tp + tn + fp + fn)
		f1 = (2*precision*precision)/(precision+recall);

		return f1, precision, recall, acc