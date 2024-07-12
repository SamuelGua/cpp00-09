#include <stack>
#include <iostream>


template <class T>
class MutantStack : public std::stack<T>
{
    public:

        typedef typename container_type::iterator iterator;
        typedef typename container_type::const_iterator const_iterator;
        typedef typename container_type::reverse_iterator reverse_iterator;
        typedef typename container_type::const_reverse_iterator const_reverse_iterator;
        
        

        // MutantStack(const MutantStack& copy);
        // MutantStack& operator=(const MutantStack& copy);

        iterator            begin(void);
        const_iterator      begin(void) const;
        
        iterator            end(void);
        const_iterator      end(void) const ;

        reverse_iterator          rend(void);
        const_reverse_iterator    rend(void) const;

        reverse_iterator          rbegin(void);
        const_reverse_iterator    rbegin(void) const;
};