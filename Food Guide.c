#include <stdio.h>
#include <stdlib.h>

void displayRecipe(const char* recipeName, const char* ingredients[], int numIngredients, const char* instructions[], int numInstructions) {
    printf("Recipe: %s\n\n", recipeName);
    printf("Ingredients:\n");
    for (int i = 0; i < numIngredients; i++) {
        printf("- %s\n", ingredients[i]);
    }
    printf("\nInstructions:\n");
    for (int i = 0; i < numInstructions; i++) {
        printf("%d. %s\n", i + 1, instructions[i]);
    }
}

void pancakes() {
  const char* recipeName = "Pancakes";
  const char* ingredients[] = {"1 cup all-purpose flour", "2 tablespoons sugar", "1 teaspoon baking powder", "1/2 teaspoon salt", "1 cup milk", "1 egg", "2 tablespoons melted butter", "1 teaspoon vanilla extract"};
  const char* instructions[] = {"In a bowl, whisk together flour, sugar, baking powder, and salt.", "In another bowl, beat the egg and mix in milk, melted butter, and vanilla extract.", "Gradually add the wet ingredients to the dry ingredients and stir until just combined.", "Heat a non-stick pan over medium heat and lightly grease with butter.", "Pour batter onto the pan and cook until bubbles appear on the surface, then flip and cook the other side.", "Serve warm with syrup and toppings of choice."};
  displayRecipe(recipeName, ingredients, 8, instructions, 6);
}

void spaghetti() {
  const char* recipeName = "Spaghetti Aglio e Olio";
  const char* ingredients[] = {"200g spaghetti", "4 cloves garlic, minced", "1/4 teaspoon red pepper flakes", "1/4 cup olive oil", "Salt to taste", "Fresh parsley, chopped", "Grated Parmesan cheese"};
  const char* instructions[] = {"Cook spaghetti according to package instructions and drain.", "In a pan, heat olive oil over medium heat and sauté garlic and red pepper flakes.", "Add the drained spaghetti and toss to coat with the garlic oil mixture.", "Season with salt and sprinkle chopped parsley and Parmesan cheese.", "Serve warm and enjoy!"};
  displayRecipe(recipeName, ingredients, 7, instructions, 5);
}

void omelette() {
  const char* recipeName = "Omelette";
  const char* ingredients[] = {"2 eggs", "2 tablespoons milk", "Salt and pepper", "1 tablespoon butter", "Chopped vegetables"};
  const char* instructions[] = {"In a bowl, whisk together eggs, milk, salt, and pepper.", "Heat butter in a non-stick pan over medium heat.", "Pour in the egg mixture and let it cook for a few minutes until the edges start to set.", "Sprinkle chopped vegetables on top and cook until the omelette is fully set.", "Fold the omelette in half and serve warm."};
  displayRecipe(recipeName, ingredients, 5, instructions, 5);
}

void grilledCheese() {
  const char* recipeName = "Grilled Cheese Sandwich";
  const char* ingredients[] = {"2 slices of bread", "2 slices of cheese", "1 tablespoon butter"};
  const char* instructions[] = {"Butter one side of each slice of bread.", "Place cheese between the unbuttered sides of the bread.", "Heat a pan and grill the sandwich until golden brown on both sides.", "Serve warm."};
  displayRecipe(recipeName, ingredients, 3, instructions, 4);
}

void scrambledEggs() {
    const char* recipeName = "Scrambled Eggs";
    const char* ingredients[] = {"2 eggs", "2 tablespoons milk", "Salt and pepper to taste", "1 tablespoon butter"};
    const char* instructions[] = {"In a bowl, whisk together eggs, milk, salt, and pepper.", "Heat butter in a pan over medium heat.", "Pour in the egg mixture and stir constantly until soft curds form.", "Serve warm."};
    displayRecipe(recipeName, ingredients, 4, instructions, 4);
}

void caesarSalad() {
    const char* recipeName = "Caesar Salad";
    const char* ingredients[] = {"1 romaine lettuce", "1/4 cup grated Parmesan cheese", "Croutons", "Caesar dressing"};
    const char* instructions[] = {"Chop the romaine lettuce and place it in a bowl.", "Add croutons and Parmesan cheese.", "Drizzle Caesar dressing and toss well.", "Serve fresh."};
    displayRecipe(recipeName, ingredients, 4, instructions, 4);
}

void tomatoSoup() {
    const char* recipeName = "Tomato Soup";
    const char* ingredients[] = {"4 tomatoes, chopped", "1 onion, chopped", "2 cloves garlic, minced", "2 cups vegetable broth", "Salt and pepper to taste"};
    const char* instructions[] = {"Sauté onions and garlic until soft.", "Add tomatoes and cook until mushy.", "Blend mixture until smooth.", "Add broth, bring to boil, season with salt and pepper.", "Serve hot."};
    displayRecipe(recipeName, ingredients, 5, instructions, 5);
}

void friedRice() {
    const char* recipeName = "Fried Rice";
    const char* ingredients[] = {"2 cups cooked rice", "1 carrot, diced", "1/2 cup peas", "2 eggs, beaten", "2 tablespoons soy sauce", "1 tablespoon oil"};
    const char* instructions[] = {"Heat oil in a pan and cook eggs until scrambled.", "Add vegetables and stir-fry until tender.", "Mix in rice and soy sauce.", "Cook for another 2 minutes and serve warm."};
    displayRecipe(recipeName, ingredients, 6, instructions, 4);
}

void chickenCurry() {
    const char* recipeName = "Chicken Curry";
    const char* ingredients[] = {"500g chicken", "1 onion, chopped", "2 cloves garlic, minced", "1 cup coconut milk", "1 tablespoon curry powder", "Salt to taste"};
    const char* instructions[] = {"Sauté onions and garlic until fragrant.", "Add chicken and cook until browned.", "Stir in curry powder and coconut milk.", "Simmer until chicken is fully cooked.", "Serve hot with rice."};
    displayRecipe(recipeName, ingredients, 6, instructions, 5);
}

void recipeList() {
    printf("1. Pancakes\n2. Spaghetti Aglio e Olio\n3. Omelette\n4. Grilled Cheese Sandwich\n5. Scrambled Eggs\n6. Caesar Salad\n7. Tomato Soup\n8. Fried Rice\n9. Chicken Curry\n");
}

void recipeSelect() {
    int choice;
    printf("Enter the number of the recipe you want to view: ");
    scanf("%d", &choice);
    system("clear");
    switch (choice) {
        case 1: pancakes(); break;
        case 2: spaghetti(); break;
        case 3: omelette(); break;
        case 4: grilledCheese(); break;
        case 5: scrambledEggs(); break;
        case 6: caesarSalad(); break;
        case 7: tomatoSoup(); break;
        case 8: friedRice(); break;
        case 9: chickenCurry(); break;
        default: printf("Recipe not available yet.\n"); break;
    }
}

int main() {
    int option;
    printf("Welcome to the Food Guide!\n");
    do {
        printf("1. View Recipes\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        system("clear");
        if (option == 1) {
            recipeList();
            recipeSelect();
        }
    } while (option != 2);
    printf("Thank you for using the Food Guide!\n");
    return 0;
}
