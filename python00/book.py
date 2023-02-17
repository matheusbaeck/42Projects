from datetime import datetime as dt

class recipe(book):
	def __init__(name = "MyRecipeBook"):
		self.name = name
		self.creation_date = get_date()
		self.last_update = get_date()
		self.recipe.llist = {}
	
	def get_date():
		return (dt.now)

	
		