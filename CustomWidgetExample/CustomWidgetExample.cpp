#include "CustomWidgetExample.h"

CustomWidgetExample::CustomWidgetExample(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.widget_1->Populate("Red Cabbage Salat", ":/resources/images/recipe_2.png", "Serve this hearty salad recipe combining red cabbage, blue cheese and glazed walnuts as an accompaniment to anything you can imagine.");
	ui.widget_2->Populate("Tarte #1", ":/resources/images/recipe_1.png", "My mother used to cook this for us all, usually to go with Sunday dinner. I was hooked.");
	ui.widget_3->Populate("Tarte #2", ":/resources/images/recipe_3.png", "Haven't had it in ages and I was wanting to bake something special for a special someone so I asked mum for the recipe.");
}