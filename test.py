print("Hello")
class ModelUydu:
	P = 1.45;
	def __init__(self):
		P = 0;
	def set_Preasure(self,P):
		self.P = P

Model1 = ModelUydu();
Model1.set_Preasure(48.78);
print("P = ",Model1.P)

