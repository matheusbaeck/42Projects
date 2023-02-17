class recipe(book):
	def __init__(name, coocking_lvl, coocking_time, igredients, description, recipe_type):
		self.name = name
		self.coocking_lvl = coocking_lvl
		self.coocking_time  = coocking_time
		self.ingredients = ingredients
		self.description = description
		self.recipe_type = recipe_type

		

	def __str__(self):
		
