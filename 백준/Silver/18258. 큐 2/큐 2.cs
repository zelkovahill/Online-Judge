using System;
using System.IO;

class Program
{
    static void Main(string[] args)
    {
        StreamReader sr = new StreamReader(Console.OpenStandardInput());
        using (StreamWriter sw = new StreamWriter(Console.OpenStandardOutput()))
        {
            int n = int.Parse(sr.ReadLine()!);
            Queue queue = new Queue();

            for (int i = 0; i < n; i++)
            {
                string input = sr.ReadLine()!;

                // 명령어에 따른 동작
                switch (input.Split(' ')[0])
                {
                    case "push":
                        int value = int.Parse(input.Split()[1]);
                        queue.Push(value);
                        break;
                    case "pop":
                        queue.Pop(sw);
                        break;
                    case "size":
                        queue.Size(sw);
                        break;
                    case "empty":
                        queue.Empty(sw);
                        break;
                    case "front":
                        queue.Front(sw);
                        break;
                    case "back":
                        queue.Back(sw);
                        break;
                    default:
                        Console.WriteLine("쓸 때 없는 쓰지마세요.");
                        break;
                }
            }
        }
    }
}

class Node
{
    public int Value { get; set; }
    public Node Next { get; set; }

    public Node(int value)
    {
        Value = value;
        Next = null;
    }
}

class Queue
{
    private Node _Front;
    private Node _Rear;
    private int _Size;

    public Queue()
    {
        _Front = null;
        _Rear = null;
        _Size = 0;
    }

    // 큐에 정수를 넣는 연산
    public void Push(int value)
    {
        Node newNode = new Node(value);
        if (_Rear == null)
        {
            _Front = newNode;
            _Rear = newNode;
        }
        else
        {
            _Rear.Next = newNode;
            _Rear = newNode;
        }
        _Size++;
    }

    // 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력
    public void Pop(StreamWriter sw)
    {
        if (_Front == null)
        {
            sw.WriteLine("-1");
        }
        else
        {
            sw.WriteLine(_Front.Value);
            _Front = _Front.Next;
            if (_Front == null)
            {
                _Rear = null;
            }
            _Size--;
        }
    }

    // 큐에 들어있는 정수의 개수를 출력
    public void Size(StreamWriter sw)
    {
        sw.WriteLine(_Size);
    }

    // 큐가 비어있으면 1, 아니면 0을 출력
    public void Empty(StreamWriter sw)
    {
        if (_Size == 0)
        {
            sw.WriteLine("1");
        }
        else
        {
            sw.WriteLine("0");
        }
    }

    // 큐의 가장 앞에 있는 정수를 출력
    public void Front(StreamWriter sw)
    {
        if (_Front == null)
        {
            sw.WriteLine("-1");
        }
        else
        {
            sw.WriteLine(_Front.Value);
        }
    }

    // 큐의 가장 뒤에 있는 정수를 출력
    public void Back(StreamWriter sw)
    {
        if (_Rear == null)
        {
            sw.WriteLine("-1");
        }
        else
        {
            sw.WriteLine(_Rear.Value);
        }
    }
}
