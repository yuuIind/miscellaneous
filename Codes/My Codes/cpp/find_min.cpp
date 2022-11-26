int IntSLList::find_min() { //finds the minimum value of a list and returns it.
	int min=0;				//if list is empty, returns 0 (zero)
	IntSLLNode *current=null;
	if(head != 0) //checks whether list is empty or not 
	{
		min = head->info; //if it's not first item is assigned to min
	}
	else{
		return min;
	}
	for (current = head; current != 0; current = current->next);{//goes through list until reaches its end
		if(min > current->info){
			min = current->info
		}
	}
	return min;
}