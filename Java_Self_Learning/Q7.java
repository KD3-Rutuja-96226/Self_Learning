

import java.util.*;

// Product class
class Product {
    private int id;
    private String name;
    private double price;

    public Product(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    public int getId() { return id; }
    public String getName() { return name; }
    public double getPrice() { return price; }

    @Override
    public String toString() {
        return name + " ($" + price + ")";
    }

    // Needed for HashMap key comparison
    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (!(obj instanceof Product)) return false;
        Product p = (Product) obj;
        return this.id == p.id;
    }

    @Override
    public int hashCode() {
        return Objects.hash(id);
    }
}

// Shopping Cart class
class ShoppingCart {
    private HashMap<Product, Integer> cart = new HashMap<>();

    // Add product
    public void addProduct(Product product, int quantity) {
        cart.put(product, cart.getOrDefault(product, 0) + quantity);
    }

    // Remove product
    public void removeProduct(Product product) {
        cart.remove(product);
    }

    // Display cart
    public void displayCart() {
        System.out.println("\nCart Items:");
        for (Map.Entry<Product, Integer> entry : cart.entrySet()) {
            System.out.println(entry.getKey() + " x " + entry.getValue());
        }
    }

    // Calculate total
    public double getTotal() {
        double total = 0;
        for (Map.Entry<Product, Integer> entry : cart.entrySet()) {
            total += entry.getKey().getPrice() * entry.getValue();
        }
        return total;
    }

    public HashMap<Product, Integer> getCartItems() {
        return cart;
    }

    public void clearCart() {
        cart.clear();
    }
}

// Order class
class Order {
    private HashMap<Product, Integer> items;
    private double total;

    public Order(HashMap<Product, Integer> items, double total) {
        this.items = new HashMap<>(items); // copy
        this.total = total;
    }

    public void displayOrder() {
        System.out.println("\nOrder Details:");
        for (Map.Entry<Product, Integer> entry : items.entrySet()) {
            System.out.println(entry.getKey() + " x " + entry.getValue());
        }
        System.out.println("Total: $" + total);
    }
}

// Order History
class OrderHistory {
    private ArrayList<Order> orders = new ArrayList<>();

    public void addOrder(Order order) {
        orders.add(order);
    }

    public void showHistory() {
        System.out.println("\nOrder History:");
        for (int i = 0; i < orders.size(); i++) {
            System.out.println("\nOrder #" + (i + 1));
            orders.get(i).displayOrder();
        }
    }
}

// Main class
public class Q7 {
    public static void main(String[] args) {

        Product p1 = new Product(1, "Laptop", 800);
        Product p2 = new Product(2, "Phone", 500);
        Product p3 = new Product(3, "Headphones", 100);

        ShoppingCart cart = new ShoppingCart();
        OrderHistory history = new OrderHistory();

        // Add items
        cart.addProduct(p1, 1);
        cart.addProduct(p2, 2);
        cart.addProduct(p3, 1);

        cart.displayCart();

        double total = cart.getTotal();
        System.out.println("Total: $" + total);

        // Checkout
        Order order = new Order(cart.getCartItems(), total);
        history.addOrder(order);

        cart.clearCart();

        // Show history
        history.showHistory();
    }
}