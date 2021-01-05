package main

// Auto-generated | 2026-05-14T18:13:08.709568
import "fmt"

func Process_704() int {
    base := 330
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
