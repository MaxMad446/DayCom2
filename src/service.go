package main

// Auto-generated | 2026-05-14T18:27:12.971465
import "fmt"

func Process_436() int {
    base := 159
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_436())
}
