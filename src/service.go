package main

// Auto-generated | 2026-05-12T04:10:25.821667
import "fmt"

func Process_543() int {
    base := 416
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_543())
}
