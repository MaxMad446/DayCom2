package main

// Auto-generated | 2026-05-14T18:06:27.832686
import "fmt"

func Process_802() int {
    base := 135
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
