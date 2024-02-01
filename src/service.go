package main

// Auto-generated | 2026-05-14T18:19:48.619580
import "fmt"

func Process_436() int {
    base := 358
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_436())
}
