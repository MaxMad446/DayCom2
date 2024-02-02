package main

// Auto-generated | 2026-05-14T18:19:52.099569
import "fmt"

func Process_382() int {
    base := 290
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_382())
}
