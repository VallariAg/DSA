# Breadth-first search tells you if there’s a path from A to B.
# • If there’s a path, breadth-first search will find the shortest path.
# • If you have a problem like “find the shortest X,” try modeling your
# problem as a graph, and use breadth-first search to solve.

# • You need to check people in the order they were added to the search
# list, so the search list needs to be a queue. Otherwise, you won’t get
# the shortest path.
# • Once you check someone, make sure you don’t check them again.
# Otherwise, you might end up in an infinite loop.

# • Queues are FIFO (First In, First Out).
# • Stacks are LIFO (Last In, First Out).
from collections import deque
graph = {}
graph['you'] = ['friend1', 'friend2', 'friend3'] 
graph['friend1'] = ['A1', 'A2']
graph['friend2'] = ['B1', 'B2']
graph['friend3'] = ['C1', 'C2']
graph['A2'] = []
graph['A1'] = []
graph['B2'] = []
graph['B1'] = []
graph['C2'] = []
graph['C1'] = []


def serach(name, looking_for):
    que = deque()
    que += graph[name]
    searched = []
    while (que):
        person = que.popleft()
        if person not in searched:
            if person == looking_for:
                print(person)
                return True
            else:
                que += graph[person]
                searched += person
    return False

# serach for  person named C1 in 'you' s network
print(serach('you', 'C1'))
