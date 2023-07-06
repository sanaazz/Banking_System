# Banking System
In this script, we implemented a banking system. The bank has multiple branches and multiple customers. Customers can have multiple accounts in different branches.
The banking system has the following functionalities; the details of these functionalities are given below:
1. Add a branch
2. Delete a branch
3. Add a customer
4. Delete a customer
5. Add an account for a customer in a branch
6. Delete an account
7. Show the list of all accounts
8. Show detailed information about a particular branch
9. Show detailed information about a particular customer
## Add a branch
The banking system will allow adding a new branch indicating its branch id and name. Since the branch ids are unique, the system should check whether or not the specified branch id already exists (i.e., whether or not it is the id of another branch). If the branch exists, it should not allow the operation and display a warning message.

## Delete a branch
The banking system will allow the deletion of an existing branch indicating its branch id. If the branch does not exist (i.e., if there is no branch with the specified id), the system should display a warning message. Note that this operation will also delete all accounts at the branch of interest.

## Add a customer
The banking system will allow to add a new customer indicating her/his customer id and name. Since the customer ids are unique, the system should check whether or not the specified customer id already exists (i.e., whether or not it is the id of another customer), and if the customer exists, it should not allow the operation and display a warning message.

## Delete a customer
The banking system will allow the deletion of an existing customer indicating its customer id. If the customer does not exist (i.e., if there is no customer with the specified id), the system should display a warning message. Note that this operation will delete all accounts for the customer of interest.

## Add an account for a customer in a branch
The banking system will allow adding a new account for a particular customer in a branch. For that, the branch id, the customer id, and the deposited amount have to be specified. The system should first check whether or not this branch exists; if it does not, it should prevent adding an account and display a warning message. The system should also check whether or not this customer exists; if it does not, it should prevent adding an account and display a warning message. If both the branch and the customer exist, a unique account id is generated, and a new account is created with the specified deposit amount. The system should return this account id to the user. If the branch or the customer does not exist, the returned account id is -1. Note that the account ids are unique within the banking system; thus, by using an account id, the user can access this account. Note also that the same customer can have multiple accounts at the same branch, but their account ids must differ.

## Delete an account
The banking system will allow the deletion of an existing account, indicating its account id. If the account does not exist (i.e., if there is no account with the specified id), the system should display a warning message.

## Show the list of all accounts
The banking system will allow to display a list of all the accounts. This list includes the account id, the branch id, the branch name, the customer id, the customer name, and the account balance.

## Show detailed information about a particular branch
The banking system will allow to specify a branch id and display detailed information about that particular branch. This information includes the branch id, the branch name, the number of accounts opened at this branch, the list of accounts at this branch, including the account id, the customer id, the customer name, and the account balance for each account. The system should display a warning message if the branch does not exist (i.e. if there is no branch with the specified branch id).

## Show detailed information about a particular customer 
The banking system will allow to specify a customer id and display detailed information about that particular customer. This information includes the customer id, the customer name, the number of accounts opened by this customer, and the list of accounts owned by this customer, including the account id, the branch id, the branch name, and the account balance for each account. If the customer does not exist (i.e., if there is no customer with the specified customer id), the system should display a warning message.
