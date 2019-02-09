import gtk

class Base:
	def __init__(self):
		self.window = gtk.Window()
		self.window.show()

	def main(self):
		gtk.main()

base = Base()
base.main()
