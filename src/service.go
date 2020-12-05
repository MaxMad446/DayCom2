package main

// Auto-generated | 2026-05-14T18:08:55.821305
import "fmt"

func Process_916() int {
    base := 25
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_916())
}
