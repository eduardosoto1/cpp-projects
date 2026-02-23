#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>
using namespace std;

// User should be able to add, view, and delete tasks
// The main menu should contain these components: add, view, and deleting, editing, saving, and marking due date


// Takes care of single task
class Task
{
public:
	string dueDate;	// Create date task should be finished
	string name;	// name of task
	string description;	// Extra space to explain task
	bool completed;	// Mark completion
	int id;	// Id tracker for task
	
	// Static counter for the id
	static inline int newId = 0;

	// Required parts for each task
	Task(const string& name)
		: name(name),
		completed(false),
		id(newId++)
	{}

	// SETTERS
	Task& setDueDate(const string& date)
	{
		dueDate = date;
		return *this;
	}
	Task& setDescription(const string& desc)
	{
		description = desc;
		return *this;
	}
	Task& setCompletion(bool status)
	{
		completed = status;
		return *this;
	}
	// GETTERS
	int getId() const { return id; }
	const string& getName() const { return name; }
	bool isCompleted() const { return completed; }
};

class ToDoList
{
public:
	// Manages the tasks
	vector<Task> tasks;
	// Display menu
	void mainMenu()
	{
		int choice = 0;

		while (choice != 4)
		{
			choice = pickMenuOption();
		
			// Correspond choice with option from menu
			switch(choice)
			{
			case 1: 
				addTask();
				break;
			case 2: 
				displayTasks(tasks);
				break;
			case 3:
				removeTask();
				break;
			case 4: 
				return;
			default:
				cout << "Please pick a corresponding number\n";
				break;
			}
		}
	}
	int pickMenuOption()
	{
		int choice = 0; 	// How user picks option
		// Menu options
		string uiMenu[] = { "1. Add Task", "2. View Tasks", "3. Delete Tasks", "4. Exit" };

		// Output options in a format that is user-readable
		cout << string(15, '*') << endl;
		for (auto& option : uiMenu)
		{
			cout << option << endl;
		}
		cout << string(15, '*') << endl;

		cout << "Pick option by number: ";
		cin >> choice;
		if (cin.fail())
		{
			cout << "Please try inserting a number.\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return 5;
		}
		else
		{
			return choice;
		}
	}	
	// displaying tasks
	void displayTasks(const vector<Task>& tasks)
	{
		if (tasks.empty())
		{
			cout << "There are no current tasks available.\n";
			return;
		}	
		cout << "------Task List------\n";
		for (const auto& task : tasks)
		{
			cout << endl << string(15, '-') << endl;
			cout << "Task Name: " << task.name << endl;
			cout << "Extra Info: " << task.description << endl;
			cout << "Due Date: " << task.dueDate << endl;
			if (task.completed == 1)
			{
				cout << "Task Completed!\n";
			}
			else
			{
				cout << "Task still not finished...\n";
			}
			cout << "ID #: " << task.id << endl;
			cout << string(15, '-') << endl;
		}
	}
	// Gathers information revolving a single task
	void addTask()
	{
		string name, description, dueDate;
		// Gather name
		cout << "Insert task name: ";
		cin.ignore();	// Clears buffer
		getline(cin, name);
		// Gather description
		cout << "Insert extra info revolving " << name << ": ";
		getline(cin, description);
		// Gather Date by DD-MM-YY
		cout << "Enter date of completion (Format DD-MM-YYYY): ";
		getline(cin, dueDate);

		// Put it into a new task
		Task newTask(name);
		newTask.setDescription(description).setDueDate(dueDate);

		// Add to list of tasks
		tasks.push_back(newTask);
		// For Debugging
		cout << "Task was added: " << name << endl;
	}
	// removing tasks
	void removeTask()
	{
		// Get id
		int id;
		cout << "Insert ID of choice: ";
		cin >> id;

		auto it = find_if(tasks.begin(), tasks.end(), [id](const Task& t) 
		{
			return t.getId() == id;
		});

		if (it != tasks.end())
		{
			tasks.erase(it);	// remove task
			cout << "Task removed successfully!" << endl;
		}
		else
		{
			cout << "No current task at ID\n"; 
		}

	}
	// editing tasks
	void editTask()
	{
		
	}
	// marking as complete
	// menu 
};

int main()
{
	// Create object for to do list
	ToDoList ToDo;
	ToDo.mainMenu();

	return 0;
}
