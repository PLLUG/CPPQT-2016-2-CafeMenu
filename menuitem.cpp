#include "menuitem.h"

#include "visitor.h"

MenuItem::MenuItem(const std::string &title, double price)
    : AbstractMenuItem{title}
    , mPrice{price}
{

}

double MenuItem::price() const
{
    return mPrice;
}

void MenuItem::setPrice(double price)
{
    mPrice = price;
}

void MenuItem::apply(Visitor *visitor)
{
    if (visitor)
    {
        visitor->visit(this);
    }
}
