package main

// Auto-generated | 2026-05-13T22:04:44.053891
import "fmt"

func Process_831() int {
    base := 275
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
