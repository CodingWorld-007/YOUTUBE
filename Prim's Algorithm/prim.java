import java.util.Scanner;
public class prim
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number of Vertex: ");
        int V = sc.nextInt();

        int [][] G = new int[V][V]; 
        System.out.println("Enter the Adjacency Matrix : ");
        for(int i=0; i<V; i++)
        {
            for(int j=0; j<V; j++)
            {
                G[i][j] = sc.nextInt();
            }
        }
        sc.close();
        boolean[] selected = new boolean[V];
        for(int i=0; i<V; i++)
        {
            selected[i] = false;
        }

        selected[0] = true;
        int no_edge = 0;
        int total_cost = 0;

        while(no_edge < V-1)
        {
            int min = 100000;
            int x = 0, y =0;
            for(int i=0; i<V; i++)
            {
                if(selected[i])
                {
                    for(int j=0; j<V; j++)
                    {
                        if(!selected[j] && G[i][j] != 0)
                        {
                            if(min > G[i][j])
                            {
                                min = G[i][j];
                                x = i;
                                y = j;
                            }
                        }
                    }   
                }
            }
            if(min == 100000)
            {
                System.out.println("Not Connected Graph");
            }
            System.out.println(x + " - "+ y +" : " + G[x][y]);
            total_cost += G[x][y];
            selected[y] = true;
            no_edge++;
        }
        System.out.println("Total Cost of MST : "+total_cost);
    }
}
