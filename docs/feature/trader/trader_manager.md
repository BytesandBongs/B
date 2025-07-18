# Trader Manager Component

The `EL_TraderManagerComponent` allows simple bartering by swapping one item for another. Attach the component to any entity that owns an inventory to configure a trade.

## Configuration Options
- **Item to Receive**: Prefab name of the item that must be inserted into the trader's inventory.
- **Quantity of the item required**: How many units of the item are needed to trigger the trade. Defaults to `1`.
- **Item to Give**: Prefab name of the item given to the player when the trade succeeds.
- **Quantity of the item given**: Number of items spawned and inserted into the player's inventory. Defaults to `1`.

When the player inserts the required item into the trader's inventory, the component deletes the item and attempts to give the configured reward. If the player's inventory is full the trade fails and the original item is returned.
