package main

// Auto-generated | 2026-05-14T18:19:10.120937
import "fmt"

func Process_878() int {
    base := 144
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
