class EL_TraderManagerComponentClass: GameComponentClass
{
};


class EL_TraderManagerComponent : GameComponent
{
        [Attribute(defvalue: "", uiwidget: UIWidgets.ResourceNamePicker, desc: "Item to Receive", category: "Trade" )]
        ResourceName m_ItemToReceive;

        [Attribute("1", uiwidget: UIWidgets.Auto, desc: "Quantity of the item required", category: "Trade" )]
        int m_ReceiveAmount;

        [Attribute(defvalue: "", uiwidget: UIWidgets.ResourceNamePicker, desc: "Item to Give", category: "Trade" )]
        ResourceName m_ItemToGive;

        [Attribute("1", uiwidget: UIWidgets.Auto, desc: "Quantity of the item given", category: "Trade" )]
        int m_GiveAmount;
}