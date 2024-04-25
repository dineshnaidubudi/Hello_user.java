class CardDetailsNotFoundException extends Exception {
    CardDetailsNotFoundException(String message) {
        super(message);
    }
}

class Swipe {
    void swipeCard(int pin, double amount) throws CardDetailsNotFoundException {
        double initialAmount = 10000;
        int originalPin = 1234;
        if (pin != originalPin) {
            throw new CardDetailsNotFoundException("Invalid pin");
        }
        if (initialAmount < amount) {
            throw new CardDetailsNotFoundException("Your amount is insufficient");
        } else {
            initialAmount -= amount;
            System.out.println("Your transaction is successful");
        }
    }
}

class Example7 {
    public static void main(String[] args) {
        Swipe x = new Swipe();
        int pin = 1234;
        double amount = 5000;
        try {
            x.swipeCard(pin, amount);
        } catch (CardDetailsNotFoundException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
