package main

// Auto-generated | 2026-05-13T20:54:50.183908
import "fmt"

func Process_415() int {
    base := 466
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
