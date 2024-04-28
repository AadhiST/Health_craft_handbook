#include<stdio.h>

int weight_gain(int age1, int weight1, char gender1,char disease1)
{
	if((age1>=18&&age1<=40)&&(weight1>=50&&weight1<=70)&&(disease1!='y'))
	{
		printf("\n\t\t\tExercise for weight gain....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\tExcercise for male");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\tExercise for female");
		}
		printf("\n\t\t\tDiet for weight gain....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male\nBreakfast:\t\noption1:\nParatha (whole wheat flatbread) with potato or paneer stuffing\nCurd (plain yogurt)\nA handful of almonds\nA glass of banana or mango smoothie with whole milk\t\nOption 2:\nUpma (semolina cooked with vegetables and spices)\nA boiled egg or omelet\nA bowl of fresh fruits like papaya, banana, or apple\nMid-Morning Snack:\nVegetable or paneer (cottage cheese) sandwich on whole-grain bread\nA cup of chai (tea) with some nuts like almonds or walnuts\n\nLunch:\t\nOption 1:\nRoti (whole wheat flatbread) or brown rice\nDal (lentil curry) or rajma (kidney beans) curry\nA side of mixed vegetable sabzi (stir-fried vegetables)\t\nOption 2:\nChicken or paneer tikka (grilled chicken or cottage cheese)\nJeera rice (cumin-flavored rice)\nMixed vegetable salad with a drizzle of olive oil and lemon\nAfternoon Snack:\nFruit chaat (a mix of diced fruits with chaat masala and lemon juice)\nDhokla (steamed savory cake made from fermented rice and chickpea flour)\nDinner:\t\nOption 1:\nVegetable pulao (mixed vegetable rice)\nChana masala (chickpea curry) or aloo gobi (potato and cauliflower curry)\nRoti or naan (whole wheat bread)\nA side of cucumber raita (yogurt with grated cucumber and spices)\t\nOption 2:\nFish curry or paneer makhani (creamy cottage cheese curry)\nQuinoa or whole wheat bread\nSteamed or sautéed green vegetables (spinach,broccoli, or fenugreek)\nEvening Snack:\nMixture (a savory snack mix with nuts, chickpeas, and spices)\nVegetable pakoras (deep-fried vegetable fritters\nA cup of warm milk with a pinch of turmeric and honey");

		}
		else if(gender1=='f')
		{
			printf(" \n\t\t\t\tDiet for female\nBreakfast:\t\noption1:\nParatha (whole wheat flatbread) with potato or paneer stuffing\nCurd (plain yogurt)\nA handful of almonds\nA glass of banana or mango smoothie with whole milk\t\nOption 2:\nUpma (semolina cooked with vegetables and spices)\nA boiled egg or omelet\nA bowl of fresh fruits like papaya, banana, or apple\nMid-Morning Snack:\nVegetable or paneer (cottage cheese) sandwich on whole-grain bread\nA cup of chai (tea) with some nuts like almonds or walnuts\n\nLunch:\t\nOption 1:\nRoti (whole wheat flatbread) or brown rice\nDal (lentil curry) or rajma (kidney beans) curry\nA side of mixed vegetable sabzi (stir-fried vegetables)\t\nOption 2:\nChicken or paneer tikka (grilled chicken or cottage cheese)\nJeera rice (cumin-flavored rice)\nMixed vegetable salad with a drizzle of olive oil and lemon\nAfternoon Snack:\nFruit chaat (a mix of diced fruits with chaat masala and lemon juice)\nDhokla (steamed savory cake made from fermented rice and chickpea flour)\nDinner:\t\nOption 1:\nVegetable pulao (mixed vegetable rice)\nChana masala (chickpea curry) or aloo gobi (potato and cauliflower curry)\nRoti or naan (whole wheat bread)\nA side of cucumber raita (yogurt with grated cucumber and spices)\t\nOption 2:\nFish curry or paneer makhani (creamy cottage cheese curry)\nQuinoa or whole wheat bread\nSteamed or sautéed green vegetables (spinach,broccoli, or fenugreek)\nEvening Snack:\nMixture (a savory snack mix with nuts, chickpeas, and spices)\nVegetable pakoras (deep-fried vegetable fritters\nA cup of warm milk with a pinch of turmeric and honey");
		}
	}
		if((age1>=41&&age1<=70)&&(weight1>=71&&weight1<=85)&&(disease1!='y'))
	{
		printf("\n\t\t\tExercise for weight gain....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female");
		}
		printf("\n\t\t\tDiet for weight gain....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male\nBreakfast:\nTwo large whole eggs or an egg omelet with vegetables like spinach, bell peppers, and onions\nTwo slices of whole wheat bread or multigrain bread\nA bowl of Greek yogurt or a glass of whole milk\nMid-Morning Snack:\nFruit salad with a mix of seasonal fruits and a sprinkle of chia seeds or nuts\nA small portion of homemade trail mix with dried fruits and nuts\nLunch:\nGrilled chicken breast or tofu for vegetarians\nBrown rice or quinoa\nStir-fried vegetables with olive oil or ghee\nA side salad with mixed greens and a light vinaigrette dressing\nAfternoon Snack:\nPeanut butter or almond butter sandwich on whole-grain bread\nA glass of banana or strawberry milkshake with added protein powder\nVegetable sticks with hummus or yogurt dip\nDinner:\nGrilled fish (salmon, tilapia) or paneer (cottage cheese) tikka\nQuinoa or whole wheat pasta\nSteamed or stir-fried vegetables seasoned with herbs and spices\nA small bowl of lentil soup or dal\nEvening Snack:\nA bowl of oats or muesli with nuts and dried fruits\nA protein bar or a handful of roasted chickpeas\nA glass of whole milk or a fruit smoothie with added protein powder\nGeneral Tips:\nIncrease Portion Sizes: Opt for larger portions of each meal.\nInclude Healthy Fats: Add nuts, seeds, and avocados to increase calorie intake.\nFrequent Snacking: Have nutritious snacks between meals to boost calorie intake.\nStay Hydrated: Drink enough water throughout the day.");
		}
		else if(gender1=='f')
		{
			printf("\n \t\t\t\tDiet for female\nBreakfast:\nTwo large whole eggs or an egg omelet with vegetables like spinach, bell peppers, and onions\nTwo slices of whole wheat bread or multigrain bread\nA bowl of Greek yogurt or a glass of whole milk\nMid-Morning Snack:\nFruit salad with a mix of seasonal fruits and a sprinkle of chia seeds or nuts\nA small portion of homemade trail mix with dried fruits and nuts\nLunch:\nGrilled chicken breast or tofu for vegetarians\nBrown rice or quinoa\nStir-fried vegetables with olive oil or ghee\nA side salad with mixed greens and a light vinaigrette dressing\nAfternoon Snack:\nPeanut butter or almond butter sandwich on whole-grain bread\nA glass of banana or strawberry milkshake with added protein powder\nVegetable sticks with hummus or yogurt dip\nDinner:\nGrilled fish (salmon, tilapia) or paneer (cottage cheese) tikka\nQuinoa or whole wheat pasta\nSteamed or stir-fried vegetables seasoned with herbs and spices\nA small bowl of lentil soup or dal\nEvening Snack:\nA bowl of oats or muesli with nuts and dried fruits\nA protein bar or a handful of roasted chickpeas\nA glass of whole milk or a fruit smoothie with added protein powder\nGeneral Tips:\nIncrease Portion Sizes: Opt for larger portions of each meal.\nInclude Healthy Fats: Add nuts, seeds, and avocados to increase calorie intake.\nFrequent Snacking: Have nutritious snacks between meals to boost calorie intake.\nStay Hydrated: Drink enough water throughout the day.");
		}
	}
		if((age1>=71&&age1<=90)&&(weight1>=86&&weight1<=120)&&(disease1!='y'))
	{
		printf("\n\t\t\tExercise for weight gain....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female");
		}
		printf("\n\t\t\t\tDiet for weight gain....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male\nBreakfast:\nTwo whole eggs or an omelet with vegetables (spinach, tomatoes, bell peppers)\nTwo slices of whole grain bread or multigrain toast\nA bowl of Greek yogurt or a glass of milk\nMid-Morning Snack:\nA handful of mixed nuts (almonds, walnuts, cashews) and seeds (pumpkin, sunflower)\nA piece of fruit like an apple or an orange\nLunch:\nGrilled chicken breast or fish fillet\nQuinoa or brown rice\nSteamed or stir-fried vegetables (broccoli, carrots, zucchini)\nA small serving of yogurt or raita\nAfternoon Snack:\nHummus with whole grain crackers or vegetable sticks\nA protein shake with a banana or mixed berries\nDinner:\nGrilled or baked salmon or tofu\nWhole grain pasta or quinoa\nSautéed vegetables with herbs and a dash of olive oil\nA small bowl of lentil soup or a light soup\nEvening Snack:\nGreek yogurt with honey and mixed nuts\nCottage cheese with pineapple or mixed fruits\nGeneral Tips:\nBalanced Macronutrients: Ensure each meal includes a balance of protein, healthy fats, and complex carbohydrates.\nPortion Control: Monitor portion sizes to maintain a healthy weight\nRegular Exercise: Combine this diet plan with regular physical activity to maintain overall health and weight management.\nHydration: Drink sufficient water throughout the day.");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\t Diet for female\nBreakfast:\nTwo whole eggs or an omelet with vegetables (spinach, tomatoes, bell peppers)\nTwo slices of whole grain bread or multigrain toast\nA bowl of Greek yogurt or a glass of milk\nMid-Morning Snack:\nA handful of mixed nuts (almonds, walnuts, cashews) and seeds (pumpkin, sunflower)\nA piece of fruit like an apple or an orange\nLunch:\nGrilled chicken breast or fish fillet\nQuinoa or brown rice\nSteamed or stir-fried vegetables (broccoli, carrots, zucchini)\nA small serving of yogurt or raita\nAfternoon Snack:\nHummus with whole grain crackers or vegetable sticks\nA protein shake with a banana or mixed berries\nDinner:\nGrilled or baked salmon or tofu\nWhole grain pasta or quinoa\nSautéed vegetables with herbs and a dash of olive oil\nA small bowl of lentil soup or a light soup\nEvening Snack:\nGreek yogurt with honey and mixed nuts\nCottage cheese with pineapple or mixed fruits\nGeneral Tips:\nBalanced Macronutrients: Ensure each meal includes a balance of protein, healthy fats, and complex carbohydrates.\nPortion Control: Monitor portion sizes to maintain a healthy weight.\nRegular Exercise: Combine this diet plan with regular physical activity to maintain overall health and weight management.\nHydration: Drink sufficient water throughout the day.");
		}
	}
	if((age1>=18&&age1<=40)&&(weight1>=50&&weight1<=70)&&(disease1=='y'))
	{
		printf("\n\t\t\tExercise for weight gain....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male sugar patient");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female for sugar patient");
		}
		printf("\n\t\t\tDiet for weight gain....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male for sugar patient\nBreakfast:\nGreek yogurt with mixed berries and a tablespoon of chia seeds\nWhole grain toast with avocado spread\nHerbal tea or black coffee (unsweetened)\nMid-Morning Snack:\nA small apple or a handful of grapes\nA handful of almonds or walnuts\nLunch:\nGrilled chicken or tofu salad with mixed greens, tomatoes, cucumbers, and a light vinaigrette dressing\nQuinoa or brown rice with steamed vegetables\nGreen tea or herbal infusion\nAfternoon Snack:\nCarrot and cucumber sticks with hummus\nA small cup of low-fat yogurt or a fruit smoothie (without added sugar)\nDinner:\nBaked fish or lentil soup\nGrilled vegetables (zucchini, bell peppers, asparagus)\nA small portion of whole grain pasta or a slice of whole wheat bread\nEvening Snack:\nA handful of air-popped popcorn or a rice cake with almond butter\nChamomile tea or a glass of warm lemon water");
		}
		else if(gender1=='f')
		{
			printf(" \n\t\t\t\tDietfor female sugar patient\nBreakfast:\nGreek yogurt with mixed berries and a tablespoon of chia seeds\nWhole grain toast with avocado spread\nHerbal tea or black coffee (unsweetened)\nMid-Morning Snack:\nA small apple or a handful of grapes\nA handful of almonds or walnuts\nLunch:\nGrilled chicken or tofu salad with mixed greens, tomatoes, cucumbers, and a light vinaigrette dressing\nQuinoa or brown rice with steamed vegetables\nGreen tea or herbal infusion\nAfternoon Snack:\nCarrot and cucumber sticks with hummus\nA small cup of low-fat yogurt or a fruit smoothie (without added sugar)\nDinner:\nBaked fish or lentil soup\nGrilled vegetables (zucchini, bell peppers, asparagus)\nA small portion of whole grain pasta or a slice of whole wheat bread\nEvening Snack:\nA handful of air-popped popcorn or a rice cake with almond butter\nChamomile tea or a glass of warm lemon water");
		}
	}
		if((age1>=41&&age1<=70)&&(weight1>=71&&weight1<=85)&&(disease1=='y'))
	{
		printf("\n\t\t\tExercise for weight gain....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male sugar patient");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female sugar patient");
		}
		printf("\n\t\t\tDiet for weight gain....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male sugar patient\nBreakfast:\nScrambled eggs (or tofu scramble for vegetarians) with spinach and tomatoes\nWhole grain bread or roti\nA piece of fruit (apple, orange, or pear)\nMid-Morning Snack:\nMixed nuts (almonds, cashews) and seeds (pumpkin, sunflower)\nA small portion of cottage cheese with cucumber slices\nLunch:\nGrilled chicken or fish with a side of quinoa or brown rice\nStir-fried vegetables with minimal oil and spices\nA small serving of Greek yogurt or raita\nAfternoon Snack:\nHummus with whole grain crackers or vegetable sticks\nA protein smoothie with almond milk and berries\nDinner:\nGrilled tofu or lean beef with a side of roasted sweet potatoes or whole grain couscous\nSteamed broccoli or a side salad with a light vinaigrette dressing\nEvening Snack:\nSliced bell peppers or cherry tomatoes with guacamole\nHerbal tea or a cup of low-fat milk");
		}
		else if(gender1=='f')
		{
			printf("\n \t\t\t\tDiet for female sugar patient\nBreakfast:\nScrambled eggs (or tofu scramble for vegetarians) with spinach and tomatoes\nWhole grain bread or roti\nA piece of fruit (apple, orange, or pear)\nMid-Morning Snack:\nMixed nuts (almonds, cashews) and seeds (pumpkin, sunflower)\nA small portion of cottage cheese with cucumber slices\nLunch:\nGrilled chicken or fish with a side of quinoa or brown rice\nStir-fried vegetables with minimal oil and spices\nA small serving of Greek yogurt or raita\nAfternoon Snack:\nHummus with whole grain crackers or vegetable sticks\nA protein smoothie with almond milk and berries\nDinner:\nGrilled tofu or lean beef with a side of roasted sweet potatoes or whole grain couscous\nSteamed broccoli or a side salad with a light vinaigrette dressing\nEvening Snack:\nSliced bell peppers or cherry tomatoes with guacamole\nHerbal tea or a cup of low-fat milk");
		}
	}
		if((age1>=71&&age1<=90)&&(weight1>=86&&weight1<=120)&&(disease1=='y'))
	{
		printf("\n\t\t\tExercise for weight gain....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male sugar patient");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female sugar patient");
		}
		printf("\n\t\t\t\tDiet for weight gain....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male sugar patient\nBreakfast:\nOvernight oats with almond milk, chia seeds, and mixed berries\nWhole grain toast with almond butter\nMid-Morning Snack:\nA small apple or pear with a handful of nuts (walnuts, almonds)\nLunch:\nGrilled fish or tofu with quinoa or brown rice\nSteamed vegetables or a salad with mixed greens and a light dressing\nAfternoon Snack:\nGreek yogurt with a sprinkle of cinnamon and a few berries\nCarrot sticks or celery with hummus\nDinner:\nGrilled chicken or paneer with roasted vegetables\nWhole wheat pasta or a small portion of brown rice\nEvening Snack:\nA small bowl of popcorn or a rice cake with peanut butter\nHerbal tea or a cup of warm water with lemon");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\tDiet for female sugar patient\nBreakfast:\nOvernight oats with almond milk, chia seeds, and mixed berries\nWhole grain toast with almond butter\nMid-Morning Snack:\nA small apple or pear with a handful of nuts (walnuts, almonds)\nLunch:\nGrilled fish or tofu with quinoa or brown rice\nSteamed vegetables or a salad with mixed greens and a light dressing\nAfternoon Snack:\nGreek yogurt with a sprinkle of cinnamon and a few berries\nCarrot sticks or celery with hummus\nDinner:\nGrilled chicken or paneer with roasted vegetables\nWhole wheat pasta or a small portion of brown rice\nEvening Snack:\nA small bowl of popcorn or a rice cake with peanut butter\nHerbal tea or a cup of warm water with lemon");
		}
	}
}
int weight_loss(int age1, int weight1, char gender1,char disease1)
{
	if((age1>=18&&age1<=40)&&(weight1>=50&&weight1<=70)&&(disease1!='y'))
	{
		printf("\n\t\t\tDiet for weight loss....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male\nBreakfast:\t\nOption 1:\nTwo small-sized idlis (steamed rice cakes) or dosas (thin rice pancakes) made from whole grains\nSambhar (lentil-based vegetable stew) with minimal salt\nA small bowl of plain yogurt\t\nOption 2:\nVegetable poha (flattened rice) cooked with onions, peas, and carrots\nA cup of green tea or herbal tea without added sugar\nMid-Morning Snack:\nA handful of roasted chana (chickpeas) or moong dal (mung beans)\nOne small apple or a pear\nLunch:\t\nOption 1:\nChapati or whole wheat roti\nPalak paneer (spinach with cottage cheese) cooked with minimal oil and salt\nA small portion of brown rice\nCucumber raita (yogurt with cucumber and spices)\t\nOption 2:\nMethi (fenugreek) dal with minimal seasoning\nBhindi (okra) sabzi lightly cooked with spices\nSalad with cucumber, tomato, and lemon dressing\nButtermilk or a glass of chaas\nAfternoon Snack:\nMoong dal chilla (pancake) made with minimal oil and stuffed with vegetables\nA handful of unsalted mixed nuts or seeds\nDinner:\t\nOption 1:\nGrilled or baked fish seasoned with herbs and minimal salt\nStir-fried vegetables like broccoli, bell peppers, and carrots\nA small portion of quinoa or broken wheat (dalia)\t\nOption 2:\nTandoori chicken (grilled chicken marinated in spices and yogurt) or grilled paneer tikka\nLauki (bottle gourd) sabzi cooked with minimal oil and spices\nWhole wheat roti\nEvening Snack:\nSprout salad with cucumber, tomato, and lemon juice\nHerbal tea or a cup of unsweetened almond milk\nGeneral Tips:\nChoose Whole Grains: Opt for whole grains like brown rice, whole wheat, quinoa, and oats.\nControl Salt Intake: Use minimal salt while cooking and avoid adding extra salt.\nInclude Vegetables: Load up on colorful vegetables for nutrients and fiber.\nLimit Sugar: Avoid sugary beverages and desserts.\nStay Active: Regular exercise is essential for managing diabetes and blood pressure.");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\tDiet for female\nBreakfast:\t\nOption 1:\nTwo small-sized idlis (steamed rice cakes) or dosas (thin rice pancakes) made from whole grains\nSambhar (lentil-based vegetable stew) with minimal salt\nA small bowl of plain yogurt\t\nOption 2:\nVegetable poha (flattened rice) cooked with onions, peas, and carrots\nA cup of green tea or herbal tea without added sugar\nMid-Morning Snack:\nA handful of roasted chana (chickpeas) or moong dal (mung beans)\nOne small apple or a pear\nLunch:\t\nOption 1:\nChapati or whole wheat roti\nPalak paneer (spinach with cottage cheese) cooked with minimal oil and salt\nA small portion of brown rice\nCucumber raita (yogurt with cucumber and spices)\t\nOption 2:\nMethi (fenugreek) dal with minimal seasoning\nBhindi (okra) sabzi lightly cooked with spices\nSalad with cucumber, tomato, and lemon dressing\nButtermilk or a glass of chaas\nAfternoon Snack:\nMoong dal chilla (pancake) made with minimal oil and stuffed with vegetables\nA handful of unsalted mixed nuts or seeds\nDinner:\t\nOption 1:\nGrilled or baked fish seasoned with herbs and minimal salt\nStir-fried vegetables like broccoli, bell peppers, and carrots\nA small portion of quinoa or broken wheat (dalia)\t\nOption 2:\nTandoori chicken (grilled chicken marinated in spices and yogurt) or grilled paneer tikka\nLauki (bottle gourd) sabzi cooked with minimal oil and spices\nWhole wheat roti\nEvening Snack:\nSprout salad with cucumber, tomato, and lemon juice\nHerbal tea or a cup of unsweetened almond milk\nGeneral Tips:\nChoose Whole Grains: Opt for whole grains like brown rice, whole wheat, quinoa, and oats.\nControl Salt Intake: Use minimal salt while cooking and avoid adding extra salt.\nInclude Vegetables: Load up on colorful vegetables for nutrients and fiber.\nLimit Sugar: Avoid sugary beverages and desserts.\nStay Active: Regular exercise is essential for managing diabetes and blood pressure.");
		}
		printf("\n\t\t\tExercise for weight loss....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tExercise for male");
		}
		else if(gender1=='f')
		{
			printf("\n \t\t\t\tExercise for female");
		}
	}
		if((age1>=41&&age1<=70)&&(weight1>=71&&weight1<=85)&&(disease1!='y'))
	{
		printf("\n\t\t\tExercise for weight loss....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female");
		}
		printf("\n\t\t\t\tDiet for weight loss....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male\nBreakfast:\nVegetable oats upma (savory porridge) with added nuts and seeds\nA bowl of curd (plain yogurt) or a glass of buttermilk\nA small serving of seasonal fruits like papaya or berries\nMid-Morning Snack:\nA small handful of unsalted mixed nuts (almonds, walnuts, pistachios)\nCarrot or cucumber sticks with hummus\nLunch:\nGrilled chicken or fish (marinated with herbs and minimal salt)\nQuinoa or brown rice\nStir-fried vegetables seasoned with minimal oil and spices\nA small bowl of cucumber raita (yogurt with cucumber and spices)\nAfternoon Snack:\nSprouts salad with tomatoes, onions, and a squeeze of lemon\nA small apple or a pear with a handful of roasted chana (chickpeas)\nDinner:\nGrilled paneer (cottage cheese) or tofu marinated with herbs and spices\nWhole wheat pasta or a small portion of brown rice\nSteamed or lightly cooked vegetables like broccoli, bell peppers, and carrots\nA small bowl of dal or lentil soup\nEvening Snack:\nA bowl of vegetable soup with minimal salt\nA handful of roasted chickpeas or makhana (fox nuts)\nGeneral Tips:\nLimit Sodium: Minimize salt intake to manage blood pressure.\nControl Portion Sizes: Even when aiming to gain weight, portion control is crucial for managing diabetes and blood pressure.\nInclude Protein: Ensure each meal includes a source of lean protein to aid in weight gain and muscle building.\nStay Hydrated: Drink plenty of water throughout the day.");
		}
		else if(gender1=='f')
		{
			printf(" \n\t\t\t\tDiet for female\nBreakfast:\nVegetable oats upma (savory porridge) with added nuts and seeds\nA bowl of curd (plain yogurt) or a glass of buttermilk\nA small serving of seasonal fruits like papaya or berries\nMid-Morning Snack:\nA small handful of unsalted mixed nuts (almonds, walnuts, pistachios)\nCarrot or cucumber sticks with hummus\nLunch:\nGrilled chicken or fish (marinated with herbs and minimal salt)\nQuinoa or brown rice\nStir-fried vegetables seasoned with minimal oil and spices\nA small bowl of cucumber raita (yogurt with cucumber and spices)\nAfternoon Snack:\nSprouts salad with tomatoes, onions, and a squeeze of lemon\nA small apple or a pear with a handful of roasted chana (chickpeas)\nDinner:\nGrilled paneer (cottage cheese) or tofu marinated with herbs and spices\nWhole wheat pasta or a small portion of brown rice\nSteamed or lightly cooked vegetables like broccoli, bell peppers, and carrots\nA small bowl of dal or lentil soup\nEvening Snack:\nA bowl of vegetable soup with minimal salt\nA handful of roasted chickpeas or makhana (fox nuts)\nGeneral Tips:\nLimit Sodium: Minimize salt intake to manage blood pressure.\nControl Portion Sizes: Even when aiming to gain weight, portion control is crucial for managing diabetes and blood pressure.\nInclude Protein: Ensure each meal includes a source of lean protein to aid in weight gain and muscle building\nStay Hydrated: Drink plenty of water throughout the day.");
		}
	}
		if((age1>=71&&age1<=90)&&(weight1>=86&&weight1<=120)&&(disease1!='y'))
	{
		printf("\n\t\t\tExercise for weight loss....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male ");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female ");
		}
		printf("\nDiet for weight loss....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male\nBreakfast:\nVegetable omelet made with two whole eggs and assorted veggies like spinach, onions, and bell peppers\nTwo slices of whole grain bread or multigrain toast\nA small bowl of plain Greek yogurt\nMid-Morning Snack:\nA small handful of mixed nuts (almonds, cashews) and seeds (pumpkin, sunflower)\nCarrot sticks with hummus or cucumber slices with Greek yogurt dip\nLunch:\nGrilled chicken breast or fish\nQuinoa or brown rice\nSteamed or stir-fried vegetables with minimal oil and spices\nA small serving of curd or raita\nAfternoon Snack:\nSprouts salad with tomatoes, onions, and a sprinkle of chaat masala\nA small apple or a pear with a handful of roasted chickpeas\nDinner:\nGrilled tofu or paneer (cottage cheese)\nWhole grain pasta or quinoa\nSautéed vegetables seasoned with herbs and a dash of olive oi\nA small bowl of lentil soup or a light vegetable soup\nEvening Snack:\nA bowl of vegetable soup with minimal salt\nA portion of homemade roasted makhana (fox nuts)\nGeneral Tips:\nLimit Sodium: Minimize salt intake to manage blood pressure.\nControl Portion Sizes: Even when maintaining weight, portion control is crucial for managing diabetes and blood pressure.\nInclude Fiber-Rich Foods: Opt for whole grains, legumes, and plenty of vegetables.\nStay Active: Regular exercise is essential for managing diabetes and blood pressure.");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\tDiet for female\nBreakfast:\nVegetable omelet made with two whole eggs and assorted veggies like spinach, onions, and bell peppers\nTwo slices of whole grain bread or multigrain toast\nA small bowl of plain Greek yogurt\nMid-Morning Snack:\nA small handful of mixed nuts (almonds, cashews) and seeds (pumpkin, sunflower)\nCarrot sticks with hummus or cucumber slices with Greek yogurt dip\nLunch:\nGrilled chicken breast or fish\nQuinoa or brown rice\nSteamed or stir-fried vegetables with minimal oil and spices\nA small serving of curd or raita\nAfternoon Snack:\nSprouts salad with tomatoes, onions, and a sprinkle of chaat masala\nA small apple or a pear with a handful of roasted chickpeas\nDinner:\nGrilled tofu or paneer (cottage cheese)\nWhole grain pasta or quinoa\nSautéed vegetables seasoned with herbs and a dash of olive oil\nA small bowl of lentil soup or a light vegetable soup\nEvening Snack:\nA bowl of vegetable soup with minimal salt\nA portion of homemade roasted makhana (fox nuts)\nGeneral Tips:\nLimit Sodium: Minimize salt intake to manage blood pressure.\nControl Portion Sizes: Even when maintaining weight, portion control is crucial for managing diabetes and blood pressure.\nInclude Fiber-Rich Foods: Opt for whole grains, legumes, and plenty of vegetables.\nStay Active: Regular exercise is essential for managing diabetes and blood pressure.");
	}		}
if((age1>=18&&age1<=40)&&(weight1>=50&&weight1<=70)&&(disease1=='y'))
	{
		printf("\n\t\t\tExercise for weight loss....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male sugar patient");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female sugar patient");
		}
		printf("\n\t\t\tDiet for weight loss....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male sugar patient\nBreakfast:\nGreek yogurt with mixed berries and a tablespoon of chia seeds\nWhole grain toast with avocado spread\nHerbal tea or black coffee (unsweetened)\nMid-Morning Snack:\nA small apple or a handful of grapes\nA handful of almonds or walnuts\nLunch:\nGrilled chicken or tofu salad with mixed greens, tomatoes, cucumbers, and a light vinaigrette dressing\nQuinoa or brown rice with steamed vegetables\nGreen tea or herbal infusion\nAfternoon Snack:\nCarrot and cucumber sticks with hummus\nA small cup of low-fat yogurt or a fruit smoothie (without added sugar)\nDinner:\nBaked fish or lentil soup\nGrilled vegetables (zucchini, bell peppers, asparagus)\nA small portion of whole grain pasta or a slice of whole wheat bread\nEvening Snack:\nA handful of air-popped popcorn or a rice cake with almond butter\nChamomile tea or a glass of warm lemon water");
		}
		else if(gender1=='f')
		{
			printf("\n \t\t\t\tDiet for female sugar patient\nBreakfast:\nGreek yogurt with mixed berries and a tablespoon of chia seeds\nWhole grain toast with avocado spread\nHerbal tea or black coffee (unsweetened)\nMid-Morning Snack:\nA small apple or a handful of grapes\nA handful of almonds or walnuts\nLunch:\nGrilled chicken or tofu salad with mixed greens, tomatoes, cucumbers, and a light vinaigrette dressing\nQuinoa or brown rice with steamed vegetables\nGreen tea or herbal infusion\nAfternoon Snack:\nCarrot and cucumber sticks with hummus\nA small cup of low-fat yogurt or a fruit smoothie (without added sugar)\nDinner:\nBaked fish or lentil soup\nGrilled vegetables (zucchini, bell peppers, asparagus)\nA small portion of whole grain pasta or a slice of whole wheat bread\nEvening Snack:\nA handful of air-popped popcorn or a rice cake with almond butter\nChamomile tea or a glass of warm lemon water");
		}
	}
		if((age1>=41&&age1<=70)&&(weight1>=71&&weight1<=85)&&(disease1=='y'))
	{
		printf("\n\t\t\tExercise for weight loss....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male sugar patient");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female sugar patient");
		}
		printf("\n\t\t\t\tDiet for weight loss....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male sugar patient\nBreakfast:\nScrambled eggs (or tofu scramble for vegetarians) with spinach and tomatoes\nWhole grain bread or roti\nA piece of fruit (apple, orange, or pear)\nMid-Morning Snack:\nMixed nuts (almonds, cashews) and seeds (pumpkin, sunflower)\nA small portion of cottage cheese with cucumber slices\nLunch:\nGrilled chicken or fish with a side of quinoa or brown rice\nStir-fried vegetables with minimal oil and spices\nA small serving of Greek yogurt or raita\nAfternoon Snack:\nHummus with whole grain crackers or vegetable sticks\nA protein smoothie with almond milk and berries\nDinner:\nGrilled tofu or lean beef with a side of roasted sweet potatoes or whole grain couscous\nSteamed broccoli or a side salad with a light vinaigrette dressing\nEvening Snack:\nSliced bell peppers or cherry tomatoes with guacamole\nHerbal tea or a cup of low-fat milk");
		}
		else if(gender1=='f')
		{
			printf(" \n\t\t\t\tDietfor female sugar patient\nBreakfast:\nScrambled eggs (or tofu scramble for vegetarians) with spinach and tomatoes\nWhole grain bread or roti\nA piece of fruit (apple, orange, or pear)\nMid-Morning Snack:\nMixed nuts (almonds, cashews) and seeds (pumpkin, sunflower)\nA small portion of cottage cheese with cucumber slices\nLunch:\nGrilled chicken or fish with a side of quinoa or brown rice\nStir-fried vegetables with minimal oil and spices\nA small serving of Greek yogurt or raita\nAfternoon Snack:\nHummus with whole grain crackers or vegetable sticks\nA protein smoothie with almond milk and berries\nDinner:\nGrilled tofu or lean beef with a side of roasted sweet potatoes or whole grain couscous\nSteamed broccoli or a side salad with a light vinaigrette dressing\nEvening Snack:\nSliced bell peppers or cherry tomatoes with guacamole\nHerbal tea or a cup of low-fat milk");
		}
	}
		if((age1>=71&&age1<=90)&&(weight1>=86&&weight1<=120)&&(disease1=='y'))
	{
		printf("\n\t\t\tExercise for weight loss....!");
		if(gender1=='m')
		{
			printf("\n\t\t\t\texcercise for male sugar patient");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\texercise for female sugar patient");
		}
		printf("\nDiet for weight loss....!");
			if(gender1=='m')
		{
			printf("\n\t\t\t\tDiet for male sugar patient\nBreakfast:\nOvernight oats with almond milk, chia seeds, and mixed berries\nWhole grain toast with almond butter\nMid-Morning Snack:\nA small apple or pear with a handful of nuts (walnuts, almonds)\nLunch:\nGrilled fish or tofu with quinoa or brown rice\nSteamed vegetables or a salad with mixed greens and a light dressing\nAfternoon Snack:\nGreek yogurt with a sprinkle of cinnamon and a few berries\nCarrot sticks or celery with hummus\nDinner:\nGrilled chicken or paneer with roasted vegetables\nWhole wheat pasta or a small portion of brown rice\nEvening Snack:\nA small bowl of popcorn or a rice cake with peanut butter\nHerbal tea or a cup of warm water with lemon");
		}
		else if(gender1=='f')
		{
			printf("\n\t\t\t\tDiet for female sugar patient\nBreakfast:\nOvernight oats with almond milk, chia seeds, and mixed berries\nWhole grain toast with almond butter\nMid-Morning Snack:\nA small apple or pear with a handful of nuts (walnuts, almonds)\nLunch:\nGrilled fish or tofu with quinoa or brown rice\nSteamed vegetables or a salad with mixed greens and a light dressing\nAfternoon Snack:\nGreek yogurt with a sprinkle of cinnamon and a few berries\nCarrot sticks or celery with hummus\nDinner:\nGrilled chicken or paneer with roasted vegetables\nWhole wheat pasta or a small portion of brown rice\nEvening Snack:\nA small bowl of popcorn or a rice cake with peanut butter\nHerbal tea or a cup of warm water with lemon");
	}		}

}
int main()
{
    int password, age, weight, choice;
    char user_id, gender, disease, name[100];

    printf("			                  ****HEALTHCRAFT HANDBOOK****\n");


    printf("\n\t\tFirst sign up your account for future use");


    printf("\n*****************************************************************************************************");

    printf("\nEnter your User Id: ");
    scanf(" %s", &user_id);


    printf("Enter a password: ");
    scanf("%d", &password);

    printf("\n*****************************************************************************************************");

    printf("\nFILL YOUR DETAILS");

    printf("\nEnter your name:");
    scanf(" %s",&name);

    printf("Enter your age: ");
    scanf("%d", &age);

     printf("are you diabetes/sugar patient?");
    scanf("%s",&disease);

    printf("Enter your Gender: ");
    scanf(" %s", &gender);

    printf("Enter your weight:");
    scanf(" %d",&weight);

    while (1) {
        printf("	1. Weight gain\n");
        printf("	2. Weight loss\n");
        printf("	3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
				weight_gain(age,weight,gender,disease);
                break;
            case 2:
   				weight_loss(age,weight,gender,disease);
                break;
            case 3:
                printf("			Follow this instruction and be healthy and fit!\n					Thank You...!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
