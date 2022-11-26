void IntSLList::swap_nodes(int val) {
	IntSLLNode *check=null; // to check whether the value exists in list
	IntSLLNode *prev=null;
	for (check = head; check != 0 && !(check->info == value); check = check->next);{
	//loop terminates if check is null or it has the address of the value
		prev=check;
	}
	if(check != 0){ // assume that list = 1 2 3 4 5 and head = p(1), prev = p(3), check = p(4)
		prev->next = head; // prev = p(3) | prev.next = p(1) 
		head = head->next; // head = p(2) | head.next = p(3)
		(prev->next)->next = check->next; // p(1).next = p(5)
		check->next = head; // check.next = p(2)
		head = check; // head = p(4)
		//Final positions: prev = p(3) | prev.next = p(1) | head = check = p(4) 
		//				   head.next = check.next= p(2) | p(1).next = p(5)
		// final form of list is: 4 2 3 1 5
	}
	else{ //if there is no data equals to val
		cout<<"There is no such value as "<<val<<" in the list."<<endl;
	}
	delete check;
	delete prev;
}