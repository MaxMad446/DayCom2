package main

// Auto-generated | 2026-05-14T18:19:13.083435
import "fmt"

func Process_357() int {
    base := 41
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_357())
}
