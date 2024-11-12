package main

// Auto-generated | 2026-05-12T03:46:24.229094
import "fmt"

func Process_436() int {
    base := 36
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_436())
}
