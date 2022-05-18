C++ itself a functional programming language, to achieve OOP we’re using class concept.
If we carefully see, we’ll found that C++ is a procedural aka functional programming language. It’s starts with a main function and we can create as many user-defined functions as we want.
The flaw back with functional approach is that its data are kept private or local inside it’s curly braces. A function can’t share its data with other functions. Not even invoke a variable except the variable being a global variable. But, sometimes it’s needs to deal with data outside from the function. And not every variable we can declare as global, since declaring global variable is not that secure for application. So, data sharing with various procedures are hefty for this reason.  
Here, OOP concepts come to paly most important role. As for C++, we can create templates that can have variables and functions respectively as data members and member functions. We can set specific members to be invokable, and restrict sensitive members from access directly. 
So, OOP is concept handy for create robust, secure, readable and scalable software systems.

Objects vs Classes
There can be multiple objects with same category of attributes. On top of these attributes different objects can be made. So, for various objects, although these attributes are same but characteristics differs from there utilization of attributes. For instance, A Tesla model 3 car has the same attribute as model 2 car. Both of the car has door, autopilot, tiers and many more essential spare parts. But still both of them has significant differences. How? Can you measure? Yes, both cars may have all the same spare parts but their specifications are different. Model 3 has better engine than model 2, model 2 was consuming more battery power to run a mile. So, what we see not attributes are making the difference rather implementation of attributes. 

What is abstraction? => abstraction is an approach to hiding implementation that an end user doesn’t require anyway. One benefit of abstraction is it’s removing user complexity. One example: we can buy products to make food our self. This is very intensive takes a lot of time. Either we can buy readymade food or frozen foods.  
Encapsulation => Hiding data in a way that nobody can trigger how the data has been implemented.
Polymorphism => ‘poly’ means many. Polymorphism refers having many forms of one class. A super class is Using a class features to create different class with different signatures. 
Inheritance => taking characteristic from one class and let it implement in another class. The class that let inheriting its attributes known namely parent class and class that has borrows the attributes is known as sub-class. Borrowing attributes from an existing class. 

Class: classes are blueprint for creating objects. 
Object: objects are instance of a class that have many characteristics that combining together state and behaviors.

Every time we declare a class, even if the class is empty, it will consume 1 byte memory. Yet until creating an object nothing will allocate in the memory. 
For an object that create on top of an empty class going to consume: 1 byte. 
Else, every class and object will take same space as per it’s attributes requiring. 



** we don’t even need to declare an object to get the result for constructor.
** private data members are automatically initialized with value 0
** Constructor: A special member function, which has no return type and which called automatically when an object is created. 
** Destructor: A special member function, which also has no return type and will called automatically when an object has to destroy or deallocating from the memory.
** Be careful of declaring constructors. A constructor function must be combined inside public access modification. 
** Constructor or destructor whatever it is, must be declared inside public modification. So, what happens when we don’t create a constructor or destructor? is that automatically declared inside private? No, as for non-declared constructor or declared it always called but implicitly by the compiler. So, at declaration is invisible and kept inside public modification.
** Friend function: A friend function that declared inside a class that actually isn’t a direct member function or method of that class but still invoke the private and public data members. 
Scope resolution operator is not required for friend function.
