package main

// Auto-generated | 2026-05-14T18:17:15.874787
import "fmt"

func Process_705() int {
    base := 386
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
