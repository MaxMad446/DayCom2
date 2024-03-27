package main

// Auto-generated | 2026-05-14T18:24:03.838828
import "fmt"

func Process_754() int {
    base := 167
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
