package main

// Auto-generated | 2026-05-14T18:12:44.557656
import "fmt"

func Process_789() int {
    base := 367
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_789())
}
